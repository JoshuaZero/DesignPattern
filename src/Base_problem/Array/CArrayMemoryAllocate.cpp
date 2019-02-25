//
// Created by st007 on 19-2-18.
//


/* the test result
 *
m_arr [0][0]:0xafd450
m_arr [0][1]:0xafd454
m_arr [0][2]:0xafd458
m_arr [0][3]:0xafd45c
m_arr [1][0]:0xafd460
m_arr [1][1]:0xafd464
m_arr [1][2]:0xafd468
m_arr [1][3]:0xafd46c
m_arr [2][0]:0xafd470
m_arr [2][1]:0xafd474
m_arr [2][2]:0xafd478
m_arr [2][3]:0xafd47c

m_arr [0][0]:0xafd450
m_arr [1][0]:0xafd460
m_arr [2][0]:0xafd470
m_arr [0][1]:0xafd454
m_arr [1][1]:0xafd464
m_arr [2][1]:0xafd474
m_arr [0][2]:0xafd458
m_arr [1][2]:0xafd468
m_arr [2][2]:0xafd478
m_arr [0][3]:0xafd45c
m_arr [1][3]:0xafd46c
m_arr [2][3]:0xafd47c
 *
 */

#include <iostream>
#include "CArrayMemoryAllocate.h"

void CArrayMemoryAllocate::ShowMemAllocate() {

    char flower[10] = "rose";
    std::string strA = "rost";
    std::cout << flower << "s are red" << std::endl;
    std::cout << strA << "s are not a green" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "m_arr [" << i << "][" << j << "]:" << &m_arr[i][j] << std::endl;
        }
    }

    std::cout << std::endl;

    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 3; ++i) {
            std::cout << "m_arr [" << i << "][" << j << "]:" << &m_arr[i][j] << std::endl;
        }
    }
}