#include <memory>

#include "list_node.h"

using std::shared_ptr;

shared_ptr<ListNode<int>> SearchList(shared_ptr<ListNode<int>> L, int key) {
  // Implement this placeholder.
  return nullptr;
}

int SearchListWrapper(shared_ptr<ListNode<int>> L, int key) {
  auto result = SearchList(L, key);
  return result ? result->data : -1;
}

#include "test_framework/test_utils_generic_main.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> param_names{"L", "key"};
  generic_test_main(argc, argv, param_names, "search_in_list.tsv",
                    &SearchListWrapper);
  return 0;
}
