/* Module: erv13260.dll
   Function: FUN_635fa550
   Address: 635fa550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635fa550(uint param_1,uint *param_2,byte param_3,int *param_4,int param_5,int param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 != (uint *)0x3) && (param_2 != (uint *)0x4)) {
    uVar2 = 0;
    do {
      if ((((((uVar2 == 0) && ((param_3 & 0x20) != 0)) || ((uVar2 == 1 && ((param_3 & 0x10) != 0))))
           || ((uVar2 == 2 && ((param_3 & 8) != 0)))) || ((uVar2 == 3 && ((param_3 & 4) != 0)))) ||
         (((uVar2 == 4 && ((param_3 & 2) != 0)) || ((uVar2 == 5 && ((param_3 & 1) != 0)))))) {
        iVar1 = FUN_635fa6b0(param_2,param_1,uVar2,param_5,param_6,param_7);
        *param_4 = *param_4 + iVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
    uVar2 = 4;
    do {
      if (((((uVar2 == 0) && ((param_3 & 0x20) != 0)) || ((uVar2 == 1 && ((param_3 & 0x10) != 0))))
          || ((uVar2 == 2 && ((param_3 & 8) != 0)))) ||
         (((uVar2 == 3 && ((param_3 & 4) != 0)) ||
          (((uVar2 == 4 && ((param_3 & 2) != 0)) || ((uVar2 == 5 && ((param_3 & 1) != 0)))))))) {
        iVar1 = FUN_635fa6b0(param_2,param_1,uVar2,param_5,param_6,param_7);
        param_4[1] = param_4[1] + iVar1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 6);
    return;
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_635fa6b0(param_2,param_1,uVar2,param_5,param_6,param_7);
    uVar2 = uVar2 + 1;
    *param_4 = *param_4 + iVar1;
  } while ((int)uVar2 < 4);
  uVar2 = 4;
  do {
    iVar1 = FUN_635fa6b0(param_2,param_1,uVar2,param_5,param_6,param_7);
    uVar2 = uVar2 + 1;
    param_4[1] = param_4[1] + iVar1;
  } while ((int)uVar2 < 6);
  return;
}


