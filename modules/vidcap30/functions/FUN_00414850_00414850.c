/* Module: vidcap30.exe
   Function: FUN_00414850
   Address: 00414850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414850(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((HGDIOBJ)param_1[0x6c] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x6c]);
    }
    param_1[0x6c] = 0;
    if ((HIMAGELIST)param_1[0x72] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x72]);
    }
    param_1[0x72] = 0;
    if ((HIMAGELIST)param_1[0x6f] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x6f]);
    }
    param_1[0x6f] = 0;
    if ((HIMAGELIST)param_1[0x53] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x53]);
    }
    param_1[0x53] = 0;
    if ((HIMAGELIST)param_1[0x54] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x54]);
    }
    param_1[0x54] = 0;
    if ((HIMAGELIST)param_1[0x55] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x55]);
    }
    param_1[0x55] = 0;
    FUN_00414a10(param_1 + 0x40);
    if ((HIMAGELIST)param_1[0x5a] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x5a]);
    }
    param_1[0x5a] = 0;
    if ((HIMAGELIST)param_1[0x5e] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x5e]);
    }
    param_1[0x5e] = 0;
    FUN_00414a10(param_1 + 0x44);
    if ((HIMAGELIST)param_1[0x62] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x62]);
    }
    param_1[0x62] = 0;
    FUN_00414a10(param_1 + 0x48);
    if ((HIMAGELIST)param_1[0x66] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x66]);
    }
    param_1[0x66] = 0;
    FUN_00414a10(param_1 + 0x4c);
    FUN_00414a10(param_1 + 8);
    FUN_00414a10(param_1 + 4);
    FUN_00414a10(param_1);
    FUN_00414a10(param_1 + 0xc);
    FUN_00414a10(param_1 + 0x18);
    FUN_00414a10(param_1 + 0x1c);
    FUN_00414a10(param_1 + 0x10);
    FUN_00414a10(param_1 + 0x14);
    FUN_00414a10(param_1 + 0x20);
    FUN_00414a10(param_1 + 0x24);
    FUN_00414a10(param_1 + 0x28);
    FUN_00414a10(param_1 + 0x2c);
    FUN_00414a10(param_1 + 0x30);
    FUN_00414a10(param_1 + 0x34);
    FUN_00414a10(param_1 + 0x38);
    FUN_00414a10(param_1 + 0x3c);
    for (iVar1 = 0x73; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


