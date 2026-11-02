/* Module: pncrt.dll
   Function: __CxxFrameHandler
   Address: 78007d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
__CxxFrameHandler(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
                    /* 0x7d70  86  __CxxFrameHandler */
  uVar1 = FUN_78007100(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,0);
  return uVar1;
}


