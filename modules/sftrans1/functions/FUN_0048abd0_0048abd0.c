/* Module: sftrans1.dll
   Function: FUN_0048abd0
   Address: 0048abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0048abd0(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = param_2;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    if (*(int *)(param_1 + 0x128) == 0) {
      param_2 = (uint *)(param_1 + 0xa8);
    }
    else {
      param_2 = (uint *)(param_1 + 0xac);
    }
    if ((uVar1 & 1) != 0) {
      ImageList_Remove((HIMAGELIST)puVar3[2],-1);
    }
    iVar5 = 0;
    piVar4 = (int *)*param_2;
    if (0 < *piVar4) {
      do {
        puVar2 = *(undefined4 **)(piVar4[2] + iVar5 * 4);
        if ((uVar1 & 1) != 0) {
          ImageList_Add((HIMAGELIST)puVar3[2],(HBITMAP)puVar2[2],(HBITMAP)0x0);
        }
        if (((uVar1 & 2) != 0) && (puVar2[1] != 0)) {
          *(undefined4 *)(puVar3[3] + iVar5 * 4) = puVar2[1];
        }
        if ((uVar1 & 4) != 0) {
          *(undefined4 *)(puVar3[4] + iVar5 * 4) = *puVar2;
        }
        iVar5 = iVar5 + 1;
        piVar4 = (int *)*param_2;
      } while (iVar5 < *piVar4);
    }
    puVar3[1] = *(uint *)(param_1 + 0x128);
    return iVar5;
  }
  return 0;
}


