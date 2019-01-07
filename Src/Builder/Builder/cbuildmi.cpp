/*
 * MIT License
 *
 * Copyright (c) 2018 Whuer_XiaoJie <1939346428@qq.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#include "cbuildmi.h"

CBuildMI::CBuildMI()
{
	m_phone = new CMoblePhone();
}

CBuildMI::~CBuildMI()
{
	delete m_phone;
}


void CBuildMI::buildName(void)
{
	m_phone->setName("Xiao Mi 8");
}

void CBuildMI::buildPrice(void)
{
	m_phone->setPrice(2000);
}

void CBuildMI::showProduct(void)
{
	cout << "Name:" << m_phone->getName() << endl;
	cout << "Price(RMB):" << m_phone->getPrice() << endl;
}
