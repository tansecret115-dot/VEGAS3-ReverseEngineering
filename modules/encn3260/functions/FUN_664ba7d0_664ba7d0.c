/* Module: encn3260.dll
   Function: FUN_664ba7d0
   Address: 664ba7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl
FUN_664ba7d0(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,undefined1 *param_6,
            uint param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  if (((((param_1 != (uint *)0x0) && (-1 < param_3)) && (param_3 < 0x15)) &&
      ((((&DAT_664ef5e8)[param_3 * 0x10] & 1) != 0 &&
       (puVar5 = (uint *)(&PTR_DAT_664ef5ec)[param_3 * 4], puVar5 != (uint *)0x0)))) &&
     ((0 < (int)param_4 && (0 < (int)param_5)))) {
    bVar1 = false;
    uVar4 = 0x28;
    if ((*puVar5 & 4) == 0) {
      if (((((byte)*puVar5 & 3) == 3) && (puVar5[1] == 0)) && ((puVar5[2] < 9 && (param_7 != 0)))) {
        if (param_6 == (undefined1 *)0x0) {
          return 0;
        }
        if ((int)param_7 < 0) {
          return 0;
        }
        if (0x100 < (int)param_7) {
          return 0;
        }
        uVar4 = param_7 * 4 + 0x28;
        bVar1 = true;
      }
    }
    else {
      uVar4 = 0x34;
    }
    if ((int)uVar4 <= param_2) {
      puVar5 = param_1;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      *param_1 = 0x28;
      param_1[1] = param_4;
      param_1[2] = param_5;
      *(undefined2 *)(param_1 + 3) = 1;
      uVar2 = FUN_664ba6b0(param_3,param_4,param_5);
      param_1[5] = uVar2;
      FUN_664ba4d0((int)param_1,param_3);
      if (bVar1) {
        FUN_664ba5b0(param_1,param_6,param_7);
      }
      return uVar4;
    }
  }
  return 0;
}


