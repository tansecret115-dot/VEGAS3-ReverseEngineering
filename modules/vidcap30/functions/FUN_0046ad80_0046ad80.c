/* Module: vidcap30.exe
   Function: FUN_0046ad80
   Address: 0046ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_0046ad80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  
  FUN_00583610(param_2,param_3,(LPCRITICAL_SECTION)(param_1 + 0x3a),param_4,param_5);
  param_1[0x38] = &PTR_LAB_00592f00;
  param_1[0x39] = &PTR_LAB_00592c20;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  param_1[0x45] = 1;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 1;
  param_1[0x47] = 0;
  param_1[0x49] = 0x3ff00000;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *param_1 = &PTR_LAB_00592ec4;
  param_1[3] = &PTR_LAB_00592e7c;
  param_1[4] = &PTR_LAB_00592e68;
  param_1[0x26] = &PTR_LAB_00592e44;
  param_1[0x38] = &PTR_LAB_00592dec;
  param_1[0x39] = &PTR_LAB_00592dcc;
  hHeap = HeapCreate(1,0x2c56a0,0);
  param_1[0x52] = hHeap;
  if (hHeap != (HANDLE)0x0) {
    pvVar1 = HeapAlloc(hHeap,1,0x2c56a0);
    param_1[0x53] = pvVar1;
  }
  if (param_1[0x53] == 0) {
    *param_4 = 0x8007000e;
  }
  return param_1;
}


