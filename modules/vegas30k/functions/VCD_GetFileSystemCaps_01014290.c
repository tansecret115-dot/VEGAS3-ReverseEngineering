/* Module: vegas30k.dll
   Function: VCD_GetFileSystemCaps
   Address: 01014290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall VCD_GetFileSystemCaps(struct tagFILE_SYSTEM_CAPS *) */

long VCD_GetFileSystemCaps(tagFILE_SYSTEM_CAPS *param_1)

{
  int iVar1;
  tagFILE_SYSTEM_CAPS *ptVar2;
  
                    /* 0x14290  584  ?VCD_GetFileSystemCaps@@YGJPAUtagFILE_SYSTEM_CAPS@@@Z */
  if (param_1 == (tagFILE_SYSTEM_CAPS *)0x0) {
    return -0x7ff8ffa9;
  }
  ptVar2 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ptVar2 = 0;
    ptVar2 = ptVar2 + 4;
  }
  *(undefined4 *)param_1 = 0x28;
  *(undefined1 **)(param_1 + 8) = &LAB_01014130;
  *(code **)(param_1 + 0xc) = FUN_010140b0;
  *(undefined1 **)(param_1 + 0x10) = &LAB_01014050;
  *(undefined1 **)(param_1 + 0x14) = &LAB_01013e60;
  *(undefined1 **)(param_1 + 0x18) = &LAB_01013d10;
  *(undefined1 **)(param_1 + 0x1c) = &LAB_01013950;
  *(undefined1 **)(param_1 + 0x20) = &LAB_010128b0;
  *(code **)(param_1 + 0x24) = VCD_SortDirEntry;
  return 0;
}


