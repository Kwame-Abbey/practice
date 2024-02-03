# creates a file in '/tmp'

file { '/tmp/school':
  'ensure': file,
  'mode': '0644'
  'content': 'I love Puppet',
  'owner': 'www-data',
  'group': 'www-data'
}
