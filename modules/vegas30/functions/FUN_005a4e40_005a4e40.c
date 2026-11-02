/* Module: vegas30.exe
   Function: FUN_005a4e40
   Address: 005a4e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a4e40(uint param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int local_64;
  undefined1 local_54 [4];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = DAT_0064b138;
  iVar6 = 0;
  bVar2 = false;
  bVar3 = false;
  if ((param_2 & 1) != 0) {
    piVar5 = (int *)FUN_005b87b0(DAT_0064b138);
    if (piVar5 == (int *)0x0) {
      local_64 = 0;
    }
    else {
      local_64 = *piVar5;
    }
    if (0 < local_64) {
      do {
        iVar1 = *(int *)(piVar5[2] + iVar6 * 4);
        if (*(int *)(iVar1 + 4) == 3) {
          FUN_005ba670(uVar4,*(undefined4 *)(iVar1 + 0x40),local_54,local_48,local_50,0);
          FUN_005b83b0(uVar4,1);
          FUN_00522150(iVar1 + 0x80,local_50,local_30,local_2c);
          FUN_005b84d0(uVar4,1);
          bVar2 = true;
          bVar3 = true;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_64);
    }
  }
  if ((param_2 & 6) != 0) {
    bVar2 = true;
    bVar3 = true;
  }
  if (((param_1 & 0x800) != 0) && (*(int *)(DAT_0064762c + 0x80) != 0)) {
    FUN_00427f90(0xffffffff,0xffffffff,0,1);
  }
  if ((param_1 & 0x4000) != 0) {
    FUN_00428f30(1,0);
  }
  if ((bVar2) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
    InvalidateRect(*(HWND *)(*(int *)(DAT_0064762c + 0xa4) + 8),(RECT *)0x0,0);
  }
  if ((bVar3) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
    InvalidateRect(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),(RECT *)0x0,0);
  }
  return;
}


