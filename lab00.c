//snipets
'.source.c':
  'main function':
    'prefix': 'main'
    'body': '''
    #include<stdio.h>

    int main()
    {
      $1
    }
    '''

  'printf function':
    'prefix': 'printf'
    'body': '''printf("%$1", $2);
    $3
    '''


  'scanf function':
    'prefix': 'scanf'
    'body': '''scanf("%$1",&$2);
      $3
    '''
