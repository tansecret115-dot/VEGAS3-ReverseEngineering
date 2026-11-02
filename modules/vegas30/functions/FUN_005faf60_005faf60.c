/* Module: vegas30.exe
   Function: FUN_005faf60
   Address: 005faf60
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005faf60(void)

{
  long lVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  lVar1 = Transport_QueryInternalInterface((_GUID *)&DAT_0060ed58,&local_4);
  if (-1 < lVar1) {
    (**(code **)(*local_4 + 8))(local_4);
    FUN_004f8c70(&DAT_006476a0);
    FUN_0059e430();
    lVar1 = Transport_Cleanup();
    if (DAT_0064b144 != (int *)0x0) {
      (**(code **)(*DAT_0064b144 + 8))(DAT_0064b144);
    }
    DAT_0064b144 = (int *)0x0;
    return lVar1;
  }
  return 0x4e001;
}


