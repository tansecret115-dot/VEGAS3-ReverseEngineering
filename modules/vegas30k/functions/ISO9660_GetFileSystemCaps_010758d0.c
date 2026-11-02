/* Module: vegas30k.dll
   Function: ISO9660_GetFileSystemCaps
   Address: 010758d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall ISO9660_GetFileSystemCaps(struct tagFILE_SYSTEM_CAPS *) */

long ISO9660_GetFileSystemCaps(tagFILE_SYSTEM_CAPS *param_1)

{
  int iVar1;
  tagFILE_SYSTEM_CAPS *ptVar2;
  
                    /* 0x758d0  112  ?ISO9660_GetFileSystemCaps@@YGJPAUtagFILE_SYSTEM_CAPS@@@Z */
  if (param_1 == (tagFILE_SYSTEM_CAPS *)0x0) {
    return -0x7ff8ffa9;
  }
  ptVar2 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)ptVar2 = 0;
    ptVar2 = ptVar2 + 4;
  }
  *(undefined4 *)param_1 = 0x28;
  *(undefined1 **)(param_1 + 8) = &LAB_01075830;
  *(code **)(param_1 + 0xc) = FUN_010757b0;
  *(undefined1 **)(param_1 + 0x10) = &LAB_01075570;
  *(undefined1 **)(param_1 + 0x14) = &LAB_01074ea0;
  *(code **)(param_1 + 0x18) = FUN_010746f0;
  *(code **)(param_1 + 0x1c) = FUN_01074e50;
  *(undefined1 **)(param_1 + 0x20) = &LAB_0114b960;
  return 0;
}


