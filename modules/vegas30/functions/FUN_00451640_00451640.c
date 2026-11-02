/* Module: vegas30.exe
   Function: FUN_00451640
   Address: 00451640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00451640(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((HGDIOBJ)param_1[0x96] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)param_1[0x96]);
    }
    param_1[0x96] = 0;
    if ((HIMAGELIST)param_1[0x9c] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x9c]);
    }
    param_1[0x9c] = 0;
    if ((HIMAGELIST)param_1[0x99] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x99]);
    }
    param_1[0x99] = 0;
    if ((HIMAGELIST)param_1[0xae] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xae]);
    }
    param_1[0xae] = 0;
    if ((HIMAGELIST)param_1[0xad] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xad]);
    }
    param_1[0xad] = 0;
    if ((HIMAGELIST)param_1[0xac] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xac]);
    }
    param_1[0xac] = 0;
    if ((HIMAGELIST)param_1[0x7e] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x7e]);
    }
    param_1[0x7e] = 0;
    FUN_004519a0(param_1 + 0x7f);
    FUN_004519a0(param_1 + 0x83);
    FUN_004519a0(param_1 + 0x54);
    if ((HIMAGELIST)param_1[0x68] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x68]);
    }
    param_1[0x68] = 0;
    if ((HIMAGELIST)param_1[0x69] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x69]);
    }
    param_1[0x69] = 0;
    if ((HIMAGELIST)param_1[0x6a] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x6a]);
    }
    param_1[0x6a] = 0;
    FUN_004519a0(param_1 + 0x44);
    if ((HIMAGELIST)param_1[0x6e] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x6e]);
    }
    param_1[0x6e] = 0;
    if ((HIMAGELIST)param_1[0x6f] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x6f]);
    }
    param_1[0x6f] = 0;
    if ((HIMAGELIST)param_1[0x70] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x70]);
    }
    param_1[0x70] = 0;
    FUN_004519a0(param_1 + 0x48);
    if ((HIMAGELIST)param_1[0x74] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x74]);
    }
    param_1[0x74] = 0;
    if ((HIMAGELIST)param_1[0x75] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x75]);
    }
    param_1[0x75] = 0;
    if ((HIMAGELIST)param_1[0x76] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x76]);
    }
    param_1[0x76] = 0;
    FUN_004519a0(param_1 + 0x4c);
    if ((HIMAGELIST)param_1[99] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[99]);
    }
    param_1[99] = 0;
    if ((HIMAGELIST)param_1[100] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[100]);
    }
    param_1[100] = 0;
    FUN_004519a0(param_1 + 0x40);
    if ((HIMAGELIST)param_1[0x8a] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x8a]);
    }
    param_1[0x8a] = 0;
    if ((HIMAGELIST)param_1[0x8b] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x8b]);
    }
    param_1[0x8b] = 0;
    FUN_004519a0(param_1 + 0x8c);
    if ((HIMAGELIST)param_1[0x7a] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x7a]);
    }
    param_1[0x7a] = 0;
    FUN_004519a0(param_1 + 0x50);
    FUN_004519a0(param_1 + 8);
    FUN_004519a0(param_1 + 4);
    FUN_004519a0(param_1 + 0x10);
    FUN_004519a0(param_1);
    FUN_004519a0(param_1 + 0xc);
    FUN_004519a0(param_1 + 0x14);
    FUN_004519a0(param_1 + 0x20);
    FUN_004519a0(param_1 + 0x24);
    FUN_004519a0(param_1 + 0x18);
    FUN_004519a0(param_1 + 0x1c);
    FUN_004519a0(param_1 + 0x28);
    FUN_004519a0(param_1 + 0x2c);
    FUN_004519a0(param_1 + 0x30);
    FUN_004519a0(param_1 + 0x34);
    FUN_004519a0(param_1 + 0x38);
    FUN_004519a0(param_1 + 0x3c);
    FUN_004519a0(param_1 + 0x58);
    FUN_004519a0(param_1 + 0x5c);
    if ((HIMAGELIST)param_1[0xac] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xac]);
    }
    param_1[0xac] = 0;
    if ((HIMAGELIST)param_1[0xad] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xad]);
    }
    param_1[0xad] = 0;
    if ((HIMAGELIST)param_1[0xb2] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xb2]);
    }
    param_1[0xb2] = 0;
    if ((HIMAGELIST)param_1[0xb6] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0xb6]);
    }
    param_1[0xb6] = 0;
    FUN_004519a0(param_1 + 0x9d);
    FUN_004519a0(param_1 + 0xa1);
    FUN_004519a0(param_1 + 0xa5);
    for (iVar1 = 0xb7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


