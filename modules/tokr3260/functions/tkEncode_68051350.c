/* Module: tokr3260.dll
   Function: tkEncode
   Address: 68051350
   Source: Ghidra pseudocode (Stage 10 batch) */


void tkEncode(int *param_1,double *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
                    /* 0x1350  6  tkEncode */
  uVar4 = DAT_6805b04c;
  if ((param_1 != (int *)0x0) && (param_1[3] != 0)) {
    if (*param_1 == 1) {
      uVar5 = 0;
      if (param_1[2] != 0) {
        do {
          uVar3 = *(undefined2 *)param_2;
          param_2 = (double *)((int)param_2 + 2);
          *(undefined2 *)(param_1[4] + 2 + uVar5 * 4) = uVar3;
          iVar2 = uVar5 * 4;
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined2 *)(param_1[4] + iVar1) = *(undefined2 *)(param_1[4] + 2 + iVar2);
        } while (uVar5 < (uint)param_1[2]);
      }
      param_2 = (double *)param_1[4];
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    FUN_68053420(param_2,(undefined4 *)param_1[3],param_1 + 5,0x800,iVar1);
    iVar1 = param_1[3];
    uVar5 = 0;
    if ((param_1[0xc] & 0xfffffffcU) != 0) {
      puVar6 = param_3;
      do {
        uVar5 = uVar5 + 1;
        *puVar6 = *(uint *)((iVar1 - (int)param_3) + (int)puVar6) ^ uVar4;
        puVar6 = puVar6 + 1;
      } while (uVar5 < (uint)param_1[0xc] >> 2);
    }
  }
  return;
}


