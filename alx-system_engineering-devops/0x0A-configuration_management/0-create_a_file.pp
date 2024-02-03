# creates a file in '/tmp'

file { '/tmp/school': 
  'path'    => '/tmp/school',
  'mode'    => '0644',
  'content' =>'I love Puppet',
  'owner'   => 'www-data',
  'group'   =>'www-data'
}
