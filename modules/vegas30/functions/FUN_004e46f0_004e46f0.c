/* Module: vegas30.exe
   Function: FUN_004e46f0
   Address: 004e46f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004e46f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_34 [52];
  
  if (DAT_0064762c == 0) {
    return false;
  }
  _SfLoadString_16(DAT_00647204,0x5600,local_34,0x32);
  iVar1 = *(int *)(DAT_0064762c + 0x70);
  if (iVar1 == 0) {
    iVar1 = FUN_00411360(0x301,0,&PTR_LAB_0063ee58,local_34,&DAT_0063ee78,2,0,0xeb8,0);
    return iVar1 != 0;
  }
  if (param_2 != 0) {
    DestroyWindow(*(HWND *)(iVar1 + 8));
    return true;
  }
  FUN_0040d4a0(iVar1);
  return true;
}


