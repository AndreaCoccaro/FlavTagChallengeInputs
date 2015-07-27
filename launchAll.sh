#!/bin/bash

## running interactively and splitting the job in subjobs on the fly

echo " " >> log.challenge
export ChallengeFramework_1_10=$( echo 'root -l -b -q runChallengeFramework.C' )
echo "Running: ${ChallengeFramework_1_10}" > log.challenge
$ChallengeFramework_1_10 >> log.challenge

echo " " >> log.challenge
sed -i 's/counter=0;/counter=1;/' runChallengeFramework.C
export ChallengeFramework_10_19=$( echo 'root -l -b -q runChallengeFramework.C' )
echo "Running: ${ChallengeFramework_10_19}"
$ChallengeFramework_10_19 >> log.challenge

echo " " >> log.challenge
sed -i 's/counter=1;/counter=2;/' runChallengeFramework.C
export ChallengeFramework_20_29=$( echo 'root -l -b -q runChallengeFramework.C' )
echo "Running: ${ChallengeFramework_20_29}"
$ChallengeFramework_20_29 >> log.challenge

echo " " >> log.challenge
sed -i 's/counter=2;/counter=3;/' runChallengeFramework.C
export ChallengeFramework_30_39=$( echo 'root -l -b -q runChallengeFramework.C' )
echo "Running: ${ChallengeFramework_30_39}"
$ChallengeFramework_30_39 >> log.challenge

