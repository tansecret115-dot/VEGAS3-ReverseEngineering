/* Module: sfcdi.dll
   Function: SfCDWrite_Start
   Address: 5bf06290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_Start(struct HSFCDWRITE__ *) */

long SfCDWrite_Start(HSFCDWRITE__ *param_1)

{
  DWORD DVar1;
  HANDLE local_8;
  undefined4 local_4;
  
                    /* 0x6290  55  ?SfCDWrite_Start@@YGJPAUHSFCDWRITE__@@@Z */
  if (param_1 == (HSFCDWRITE__ *)0x0) {
    return -0x7ff8ffa9;
  }
  *(undefined4 *)(param_1 + 0x1d08) = 0;
  local_8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf05f70,param_1,
                         0,(LPDWORD)(param_1 + 8));
  *(HANDLE *)(param_1 + 4) = local_8;
  if (local_8 == (HANDLE)0x0) {
    return -0x7ff8fff2;
  }
  local_4 = *(undefined4 *)(param_1 + 0x1cf8);
  DVar1 = WaitForMultipleObjects(2,&local_8,0,0xffffffff);
  if (DVar1 == 0) {
    return *(long *)(param_1 + 0x1d0c);
  }
  if (DVar1 == 1) {
    return 0;
  }
  return -0x7fffbffb;
}


