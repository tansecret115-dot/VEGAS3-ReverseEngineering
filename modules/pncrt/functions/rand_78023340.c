/* Module: pncrt.dll
   Function: rand
   Address: 78023340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rand(void)

{
  uint uVar1;
  DWORD *pDVar2;
  
                    /* 0x23340  688  rand */
  pDVar2 = FUN_78009cc0();
  uVar1 = pDVar2[5] * 0x343fd + 0x269ec3;
  pDVar2[5] = uVar1;
  return uVar1 >> 0x10 & 0x7fff;
}


