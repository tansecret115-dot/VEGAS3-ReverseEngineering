/* Module: sftrans1.dll
   Function: FUN_00545c10
   Address: 00545c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00545c10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  
  if (param_2 == 0) {
    puVar1 = (undefined4 *)FUN_00545bb0();
    *param_1 = *puVar1;
    return;
  }
  hMem = GlobalAlloc(0x40,param_2 + 0xd);
  puVar1 = GlobalLock(hMem);
  *puVar1 = 1;
  *(undefined1 *)((int)puVar1 + param_2 + 0xc) = 0;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *param_1 = puVar1 + 3;
  return;
}


