/* Module: vegas30.exe
   Function: FUN_00502460
   Address: 00502460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050258d) */
/* WARNING: Removing unreachable block (ram,0x005025a0) */
/* WARNING: Removing unreachable block (ram,0x005025a2) */

int FUN_00502460(void)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 extraout_ECX;
  int *unaff_EBP;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int *piStack_e24;
  int *local_e20;
  undefined4 uStack_e1c;
  int *local_e18 [2];
  int *piStack_e10;
  undefined4 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04 [3588];
  
  FUN_00502080(local_e04);
  iVar1 = FUN_00502380(local_e04,local_e18,&local_e08);
  if (-1 < iVar1) {
    local_e20 = (int *)0x0;
    iVar1 = CoCreateInstance((IID *)&DAT_0061bd50,(LPUNKNOWN)0x0,1,(IID *)&DAT_0061bd60,&local_e20);
    if (-1 < iVar1) {
      iVar1 = FUN_00502310(local_e20,local_e18[0],local_e08);
      if ((-1 < iVar1) &&
         (iVar1 = (**(code **)*local_e20)(local_e20,&DAT_0061bd70,&local_e0c), -1 < iVar1)) {
        ppiVar5 = &piStack_e10;
        uVar4 = extraout_ECX;
        FUN_00503030(L"TEMPLATES");
        iVar1 = FUN_00502100(local_e0c,uVar4,ppiVar5);
        if (-1 < iVar1) {
          uStack_e1c = 0;
          iVar1 = (**(code **)(*piStack_e10 + 0x30))(piStack_e10,&uStack_e1c);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*piStack_e24 + 0x20))(piStack_e24,&uStack_e1c);
            if (((-1 < iVar1) && (0 < (int)piStack_e24)) && (iVar3 = 0, 0 < (int)piStack_e24)) {
              do {
                iVar1 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,iVar3,&stack0xfffff1cc);
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)piStack_e24);
            }
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          (**(code **)(*local_e18[0] + 8))(local_e18[0]);
        }
      }
      (**(code **)(*local_e20 + 8))(local_e20);
      local_e20 = (int *)0x0;
    }
    if (local_e18[0] != (int *)0x0) {
      pvVar2 = GlobalHandle(local_e18[0]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(local_e18[0]);
      GlobalFree(pvVar2);
    }
  }
  return iVar1;
}


