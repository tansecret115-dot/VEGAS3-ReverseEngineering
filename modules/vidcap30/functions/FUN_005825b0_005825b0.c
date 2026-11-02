/* Module: vidcap30.exe
   Function: FUN_005825b0
   Address: 005825b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005825b0(undefined4 *param_1,BOOL param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_2,0,(LPCSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}


