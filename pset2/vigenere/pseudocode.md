# Possible solution in pseudocode

l. 1. accept a single-line keyword before runtime
l. 2. keyword must be alphabetical characters only
  l. 2.1 if it doesn't have a cml argument, more than one or contains any non-alphabetical characters, print an error and exit (main returning 1);

l. 3. prompt the user for a string (plaintext: )

l. 4. encrypt the text with cypher k
  l. 4.1 k (A or a must 0; B or b must 1; C or c must 2; ... until Z or z is 25);

l. 5. print the result with (ciphertext: )
l. 6. end with a newline
l. 7. exit with main returning 0;
