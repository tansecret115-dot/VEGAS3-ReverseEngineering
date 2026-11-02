/* Module: vegas30.exe
   Function: FUN_0058dcb0
   Address: 0058dcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058dcb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uchar local_104 [260];
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((*(int *)(param_1 + 4) == 2) && ((*(byte *)(param_1 + 0x10) & 0x80) != 0)) {
    iVar6 = 0;
    iVar2 = **(int **)(param_1 + 0x24);
    if (0 < iVar2) {
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar6 * 4);
        if ((*(uint *)(iVar3 + 0x10) & 0x100000) != 0) {
          FUN_005c6b30(puVar1,iVar3,*(undefined4 *)(iVar3 + 0x50));
          iVar4 = FUN_005c68e0(iVar3);
          if (iVar4 != 0) {
            FUN_005c86c0(puVar1,iVar3,0);
          }
        }
        iVar6 = iVar6 + 1;
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xffcfffff;
      } while (iVar6 < iVar2);
    }
    if (*(int *)(param_1 + 0x354) != 0) {
      FUN_0058a5c0(param_1 + 0x248,1);
      _mbscpy(local_104,(uchar *)(param_1 + 0x250));
      puVar5 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_104);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
      _mbscat(local_104,".sfk");
      DeleteFileA((LPCSTR)local_104);
      *(undefined4 *)(param_1 + 0x354) = 0;
    }
    if (param_1 != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
      *(uint *)*puVar1 = *(uint *)*puVar1 | 0x2000;
    }
  }
  return 0;
}


