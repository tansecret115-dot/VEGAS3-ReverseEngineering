/* Module: vegas30.exe
   Function: FUN_00500110
   Address: 00500110
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00500110(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (DAT_0064762c != 0) {
    iVar2 = *(int *)(DAT_0064762c + 0x84);
    if (iVar2 == 0) {
      iVar2 = FUN_00411360(1,0,&PTR_LAB_006431b0,"Transitions",&DAT_006431d0,7,0,0x24,0);
      if (iVar2 != 0) {
        *(int *)(DAT_0064762c + 0x84) = iVar2;
      }
      return iVar2 != 0;
    }
    if (param_2 != 0) {
      DestroyWindow(*(HWND *)(iVar2 + 8));
      return true;
    }
    FUN_0040d4a0(iVar2);
    bVar1 = true;
  }
  return bVar1;
}


