/* Module: vidcap30.exe
   Function: FUN_0045c840
   Address: 0045c840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0045c840(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  uVar1 = (**(code **)(*param_1 + 4))
                    (param_2,param_3,param_1 + 10,&DAT_0058b7b8,&DAT_0058b994,param_4,param_5);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return uVar1;
}


