/* Module: wmfplug2.dll
   Function: FUN_00401d20
   Address: 00401d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00401d20(int param_1)

{
  HGLOBAL hMem;
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    hMem = GlobalAlloc(0x40,0x20);
    piVar1 = GlobalLock(hMem);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = (int)&PTR_FUN_0047b93c;
      piVar1[1] = 0;
      piVar1[2] = 1;
      piVar1[3] = 0;
    }
    *(int **)(param_1 + 0x6c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x6c))
                        (*(undefined4 **)(param_1 + 0x6c),&DAT_0047b610,&stack0xfffffff8);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = WMCreateBackupRestorer(piVar1,param_1 + 0x68);
      return iVar2;
    }
  }
  return 0;
}


