#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{73, 42, 8, 74};
    assert(domain_review_score(item) == 238);
    assert(domain_review_lane(item) == "ship");
}
