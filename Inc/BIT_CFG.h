/*
 * BIT_CFG.h
 *
 *  Created on: Apr 14, 2024
 *      Author: Mohamed
 */

#ifndef BIT_CFG_H_
#define BIT_CFG_H_

#define MASK     1

#define SET_BIT(REG,BIT)				(REG |= MASK << BIT)
#define CLEAR_BIT(REG,BIT)				(REG &= ~(MASK << BIT))
#define TOGGLE_BIT(REG,BIT)				(REG ^= MASK << BIT)

#define READ_BIT(REG,BIT)				((REG >> BIT) & MASK )

#endif /* BIT_CFG_H_ */
