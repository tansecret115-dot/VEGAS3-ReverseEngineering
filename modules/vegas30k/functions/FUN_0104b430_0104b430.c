/* Module: vegas30k.dll
   Function: FUN_0104b430
   Address: 0104b430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0104b430(undefined4 param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (*param_2 < 0x271) {
    param_2[2] = *(uint *)(param_3 + 4);
    param_2[3] = *(uint *)(param_3 + 8);
    param_2[4] = *(uint *)(param_3 + 0xc);
    param_2[5] = *(uint *)(param_3 + 0x10);
    param_2[6] = *(uint *)(param_3 + 0x250);
    param_2[7] = *(uint *)(param_3 + 0x254);
    param_2[8] = *(uint *)(param_3 + 600);
    param_2[9] = *(uint *)(param_3 + 0x25c);
    param_2[10] = *(uint *)(param_3 + 0x28c);
    param_2[0xb] = *(uint *)(param_3 + 0x290);
    param_2[0xc] = *(uint *)(param_3 + 0x294);
    param_2[0xd] = *(uint *)(param_3 + 0x298);
    param_2[0x90] = *(uint *)(param_3 + 0x2c8);
    param_2[0x91] = *(uint *)(param_3 + 0x2cc);
    param_2[0x92] = *(uint *)(param_3 + 0x2d0);
    param_2[0x93] = *(uint *)(param_3 + 0x2d4);
    param_2[0x94] = *(uint *)(param_3 + 0x304);
    param_2[0x95] = *(uint *)(param_3 + 0x308);
    param_2[0x96] = *(uint *)(param_3 + 0x30c);
    param_2[0x97] = *(uint *)(param_3 + 0x310);
    param_2[0x98] = 0;
    param_2[0x99] = 0;
    param_2[0x9a] = 0;
    param_2[0x9b] = 0;
    MultiByteToWideChar(0,1,(LPCSTR)(param_3 + 0x120),-1,(LPWSTR)(param_2 + 0xe),0x104);
    *(undefined2 *)((int)param_2 + 0x23e) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


