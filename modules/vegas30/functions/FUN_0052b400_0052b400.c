/* Module: vegas30.exe
   Function: FUN_0052b400
   Address: 0052b400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b400(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  _SfList_CreateExZ_32(puVar1,4,8,8,2,0,0,0);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 8) + 8) + iVar4 * 4);
      _SfList_AllocItem_12(*puVar1,0x124,&local_4);
      puVar3 = local_4;
      *local_4 = *puVar2;
      local_4[1] = puVar2[1];
      local_4[2] = puVar2[2];
      local_4[3] = puVar2[3];
      lstrcpynA((LPSTR)(local_4 + 4),(LPCSTR)(puVar2 + 4),0x104);
      *(undefined1 *)((int)puVar3 + 0x113) = 0;
      puVar3[0x45] = puVar2[0x45];
      puVar3[0x46] = puVar2[0x46];
      puVar3[0x47] = puVar2[0x47];
      puVar3[0x48] = puVar2[0x48];
      _SfList_InsertList_16(*puVar1,0xffffffff,0,0xffffffff);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  return;
}


