actual=$(sh run_tests.sh 2>&1)
expected=$(cat expected.txt)

if [ "$actual" == "$expected" ]
then
  echo "OK"
else
  echo -e "ERROR\nActual:"$actual"\nExpected:"$expected
  exit 1
fi
