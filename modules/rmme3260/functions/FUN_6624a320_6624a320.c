/* Module: rmme3260.dll
   Function: FUN_6624a320
   Address: 6624a320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6624a39f) */

undefined4 __cdecl FUN_6624a320(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  UINT UVar2;
  undefined4 *puVar3;
  HGDIOBJ h;
  byte *pbVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  if ((((param_1 != (byte *)0x0) && (*(int *)param_1 != 0)) && (param_2 == *(int *)(param_1 + 4)))
     && (((param_3 == 0x30f || (param_3 == 0x311)) && (UVar2 = FUN_6624a470(), UVar2 != 0)))) {
    if ((*param_1 & 1) != 0) {
      FUN_6624a2b0((int)param_1,*(int **)(param_1 + 0xb68));
    }
    local_8 = *(int *)(param_1 + 0x860);
    local_c = *(int *)(local_8 + 4);
    while (local_c != 0) {
      puVar3 = (undefined4 *)FUN_66250c10(local_c);
      pbVar1 = (byte *)*puVar3;
      if ((*pbVar1 & 1) == 0) {
        iVar5 = 0;
        if (0 < *(int *)(pbVar1 + 4)) {
          pbVar4 = pbVar1 + 0x438;
          do {
            h = SelectObject(*(HDC *)(param_1 + 0x864),*(HGDIOBJ *)(*(int *)pbVar4 + 0x54));
            SetDIBColorTable(*(HDC *)(param_1 + 0x864),0,DAT_6627dd1c,(RGBQUAD *)&DAT_6627d918);
            SelectObject(*(HDC *)(param_1 + 0x864),h);
            iVar5 = iVar5 + 1;
            pbVar4 = pbVar4 + 4;
          } while (iVar5 < *(int *)(pbVar1 + 4));
        }
      }
      else {
        FUN_6624a2b0((int)param_1,*(int **)(pbVar1 + 0x438));
        FUN_6624a2b0((int)param_1,*(int **)(pbVar1 + 0x43c));
      }
      FUN_66250bf0(&local_c);
    }
    return 1;
  }
  return 0;
}


