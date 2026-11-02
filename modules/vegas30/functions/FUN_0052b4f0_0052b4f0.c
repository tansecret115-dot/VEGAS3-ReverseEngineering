/* Module: vegas30.exe
   Function: FUN_0052b4f0
   Address: 0052b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_0052b4f0(undefined4 param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x120);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x43] = param_4;
    *puVar1 = param_1;
    puVar1[0x42] = param_3;
    puVar1[0x44] = param_5;
    puVar1[0x45] = param_6;
    lstrcpynA((LPSTR)(puVar1 + 1),param_2,0x104);
    *(undefined1 *)((int)puVar1 + 0x107) = 0;
    puVar1[0x46] = param_7;
    puVar1[0x47] = param_8;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


