cxx_library(
  name = 'bloomfilter',
  header_namespace = 'bloomfilter',
  headers = subdir_glob([
    ('include', '**/*.hpp'),
  ]),
  srcs = glob([
    'src/**/*.cpp',
  ]),
  exported_headers = ['include/BloomFilter.hpp'],
  visibility = [
    '//...',
  ],
)

