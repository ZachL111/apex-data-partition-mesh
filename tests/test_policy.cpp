#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{54, 105, 13, 8, 4};
    assert(score_signal(signal_case_1) == 126);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{64, 74, 17, 16, 9};
    assert(score_signal(signal_case_2) == 57);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{94, 102, 25, 5, 9};
    assert(score_signal(signal_case_3) == 198);
    assert(classify_signal(signal_case_3) == "accept");
}
