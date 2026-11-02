/* Module: vegas30k.dll
   Function: _SfVideoPlugin_CreateInstance@4
   Address: 01024f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfVideoPlugin_CreateInstance_4(undefined4 *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x24f90  1268  _SfVideoPlugin_CreateInstance@4 */
  *param_1 = 0;
  hMem = GlobalAlloc(0x40,0x10);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_01134a00();
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_01023b50();
      if (iVar3 != 0) {
        FUN_01134d40(DAT_012099dc);
      }
      uVar4 = (**(code **)*puVar2)(puVar2,&DAT_011e69a8,param_1);
      return uVar4;
    }
  }
  return 0x8007000e;
}


