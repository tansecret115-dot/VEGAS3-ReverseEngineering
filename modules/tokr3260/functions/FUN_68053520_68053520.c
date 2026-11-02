/* Module: tokr3260.dll
   Function: FUN_68053520
   Address: 68053520
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68053520(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_200c [2040];
  undefined4 uStackY_2c;
  
  piVar2 = param_2;
  FUN_6805a6a0();
  param_2 = (int *)0x0;
  *piVar2 = param_4;
  piVar2[8] = 0;
  if (0 < param_3) {
    puVar5 = local_200c;
    do {
      piVar1 = *(int **)(*(int *)(piVar2[0x12] + (int)param_2 * 4) + 0xf21c);
      FUN_68053cc0((int)piVar1);
      piVar1[0x3c86] = *(int *)(piVar2[0x12] + (int)param_2 * 4);
      piVar1[0x3c87] = *(int *)(piVar2[0x12] + (int)param_2 * 4);
      piVar1[0x3c84] = *piVar2;
      iVar3 = 0x6184;
      piVar4 = piVar1 + 0x1865;
      do {
        iVar3 = iVar3 + 4;
        *piVar4 = *(int *)(piVar1[0x3c86] + -4 + iVar3);
        piVar4 = piVar4 + 1;
      } while (iVar3 < 0x6194);
      piVar1[0x186e] = *(int *)(piVar1[0x3c86] + 0x61b4);
      piVar1[0x1870] = *(int *)(piVar1[0x3c86] + 4);
      *(int **)(piVar2[0x12] + (int)param_2 * 4) = piVar1;
      if (((piVar2[2] == 2) && (piVar2[3] == 0x12)) && (piVar1[0x3c85] == 1)) {
        piVar1[0x1860] = 1;
      }
      else {
        piVar1[0x1860] = 0;
      }
      piVar1[0x186d] = 0xf;
      piVar1[0x1861] = 3;
      piVar1[0x1862] = 3;
      piVar1[0x1863] = 3;
      piVar1[0x1864] = 3;
      piVar1[1] = 1;
      piVar1[4] = 0;
      piVar1[0x44] = 0;
      *piVar1 = 1;
      piVar1[3] = 0;
      piVar1[0x141f] = 0;
      iVar3 = FUN_680560a0(piVar1,puVar5);
      if (iVar3 == -999999) {
        return -999999;
      }
      *(undefined4 **)(&stack0xfffffff4 + (int)param_2 * 4) = puVar5;
      param_2 = (int *)((int)param_2 + 1);
      puVar5 = puVar5 + 0x400;
    } while ((int)param_2 < param_3);
  }
  uStackY_2c = 0x68053691;
  iVar3 = FUN_68057190((int)&stack0xfffffff4,param_1,(int *)piVar2[0x12],piVar2[0x15],param_3,
                       piVar2[3]);
  return (-(uint)(iVar3 != -999999) & 999999) - 999999;
}


