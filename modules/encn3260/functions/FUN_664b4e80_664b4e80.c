/* Module: encn3260.dll
   Function: FUN_664b4e80
   Address: 664b4e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664b4eff) */

undefined4 __cdecl FUN_664b4e80(byte *param_1,int param_2,int param_3)

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
     && (((param_3 == 0x30f || (param_3 == 0x311)) && (UVar2 = FUN_664b4fd0(), UVar2 != 0)))) {
    if ((*param_1 & 1) != 0) {
      FUN_664b4e10((int)param_1,*(int **)(param_1 + 0xb68));
    }
    local_8 = *(int *)(param_1 + 0x860);
    local_c = *(int *)(local_8 + 4);
    while (local_c != 0) {
      puVar3 = (undefined4 *)FUN_664bab80(local_c);
      pbVar1 = (byte *)*puVar3;
      if ((*pbVar1 & 1) == 0) {
        iVar5 = 0;
        if (0 < *(int *)(pbVar1 + 4)) {
          pbVar4 = pbVar1 + 0x438;
          do {
            h = SelectObject(*(HDC *)(param_1 + 0x864),*(HGDIOBJ *)(*(int *)pbVar4 + 0x54));
            SetDIBColorTable(*(HDC *)(param_1 + 0x864),0,DAT_664f1514,(RGBQUAD *)&DAT_664f1110);
            SelectObject(*(HDC *)(param_1 + 0x864),h);
            iVar5 = iVar5 + 1;
            pbVar4 = pbVar4 + 4;
          } while (iVar5 < *(int *)(pbVar1 + 4));
        }
      }
      else {
        FUN_664b4e10((int)param_1,*(int **)(pbVar1 + 0x438));
        FUN_664b4e10((int)param_1,*(int **)(pbVar1 + 0x43c));
      }
      FUN_664bab40(&local_c);
    }
    return 1;
  }
  return 0;
}


