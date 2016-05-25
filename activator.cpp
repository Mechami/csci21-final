#ifndef ACTIVATOR_CPP
#define ACTIVATOR_CPP

unsigned int Activator::sumTheDigits(unsigned int value) {
    unsigned int result = 0;
    stringstream ss(""); ss << value;;
    string numString = ss.str();
    vector<unsigned int> nums;

    for (size_t index = 0; (index + 1) < numString.size(); index++) {
        nums.push_back((static_cast<unsigned char>(numString[index]) - 48) + (static_cast<unsigned char>(numString[index + 1]) - 48));
    }

    return result;
}

#endif
