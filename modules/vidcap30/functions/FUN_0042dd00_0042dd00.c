/* Module: vidcap30.exe
   Function: FUN_0042dd00
   Address: 0042dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042dd00(int *param_1)

{
  byte bVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int **ppiStack_44;
  int *piStack_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  int **ppiStack_20;
  undefined4 local_14;
  undefined4 local_10;
  int *local_8;
  undefined1 local_4 [4];
  
  ppiStack_20 = &local_8;
  puStack_24 = local_4;
  bVar1 = 0;
  piStack_28 = param_1;
  local_14 = 0;
  local_10 = 0;
  piStack_2c = (int *)0x42dd23;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 != 0) {
    return -0x7fffbffb;
  }
  piStack_2c = (int *)&stack0xffffffe4;
  piStack_30 = &DAT_005a1ca8;
  piStack_34 = param_1;
  puStack_38 = (undefined4 *)0x42dd43;
  iVar3 = (**(code **)*param_1)();
  if (iVar3 == 0) {
    puStack_38 = &local_14;
    piStack_3c = piStack_28;
    iVar3 = (**(code **)(*piStack_28 + 0x28))();
    if (-1 < iVar3) {
      ppiStack_44 = &piStack_2c;
      iVar3 = 0;
      iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&piStack_34);
      ppiVar2 = ppiStack_20;
      while (iVar4 == 0) {
        (*(code *)(*ppiStack_44)[2])(ppiStack_44);
        if (ppiVar2 == ppiStack_44) {
          if (puStack_24 == (undefined1 *)0x0) {
            iVar3 = iVar3 - (int)puStack_38;
          }
          bVar1 = 1;
          *piStack_28 = iVar3;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = (**(code **)(*piStack_2c + 0xc))(piStack_2c,1,&ppiStack_44,&piStack_3c);
      }
      (**(code **)(*piStack_2c + 8))(piStack_2c);
    }
    ppiStack_44 = (int **)0x42ddd6;
    (**(code **)(*piStack_30 + 8))();
  }
  return (-(uint)bVar1 & 0x7fffbffb) + 0x80004005;
}


