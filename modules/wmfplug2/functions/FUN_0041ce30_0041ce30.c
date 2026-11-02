/* Module: wmfplug2.dll
   Function: FUN_0041ce30
   Address: 0041ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041ce30(int *param_1,uint param_2,uint *param_3,LPCSTR param_4,undefined4 param_5,
                 undefined4 *param_6,uint param_7)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4c;
  WCHAR local_48 [31];
  undefined2 local_a;
  undefined4 local_8;
  uint local_4;
  
  if (*param_3 <= param_2 + 0x4c + param_7) {
    pvVar1 = GlobalAlloc(0x42,param_2 + 0x44c + param_7);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return param_2;
    }
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar2;
      for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pvVar1 = GlobalHandle((LPCVOID)*param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*param_1);
      GlobalFree(pvVar1);
    }
    *param_1 = (int)puVar2;
    *param_3 = param_2 + 0x44c + param_7;
  }
  puVar2 = &local_4c;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4c = 0x4c;
  local_8 = param_5;
  MultiByteToWideChar(0,1,param_4,-1,local_48,0x20);
  local_4 = param_7;
  local_a = 0;
  puVar2 = &local_4c;
  puVar5 = (undefined4 *)(*param_1 + param_2);
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(*param_1 + param_2 + 0x4c);
  for (uVar3 = param_7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *param_6;
    param_6 = param_6 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = param_7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_6;
    param_6 = (undefined4 *)((int)param_6 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_7 + param_2 + 0x4c;
}


