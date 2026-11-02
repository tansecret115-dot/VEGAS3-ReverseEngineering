/* Module: vidcap30.exe
   Function: FUN_0041d610
   Address: 0041d610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d610(int param_1)

{
  undefined4 *puVar1;
  byte *lpString1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *lpString2;
  bool bVar9;
  bool bVar10;
  ushort *local_4;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar4 = FUN_0041d940(0,puVar1,(param_1 - (int)puVar1) + 8);
  *puVar1 = uVar4;
  local_4 = &DAT_00587b04;
  do {
    iVar3 = *(int *)(local_4 + 4);
    lpString1 = (byte *)(*(int *)(local_4 + -4) + param_1);
    lpString2 = (byte *)((int)&DAT_005b2b00 + *(int *)(local_4 + -4));
    if ((9999 < iVar3) && (iVar3 < 0x27db)) {
      uVar2 = *local_4;
      if ((char)uVar2 == '\x01') {
        if (((uVar2 & 0x8000) == 0) &&
           (iVar5 = lstrcmpA((LPCSTR)lpString1,(LPCSTR)lpString2), iVar5 == 0)) {
          _SfDeleteMetric_12(DAT_005ba29c,iVar3,1);
        }
        else {
          _SfSetMetricString_12(DAT_005ba29c,iVar3,lpString1);
        }
      }
      else {
        iVar5 = *(int *)(local_4 + -2);
        if (iVar5 == 4) {
          if (((uVar2 & 0x8000) == 0) && (*(int *)lpString1 == *(int *)lpString2)) {
            _SfDeleteMetric_12(DAT_005ba29c,iVar3,4);
          }
          else {
            _SfSetMetric_12(DAT_005ba29c,iVar3,*(undefined4 *)lpString1);
          }
        }
        else {
          if ((uVar2 & 0x8000) == 0) {
            bVar9 = false;
            iVar6 = 0;
            bVar10 = true;
            iVar7 = iVar5;
            pbVar8 = lpString1;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar9 = *pbVar8 < *lpString2;
              bVar10 = *pbVar8 == *lpString2;
              pbVar8 = pbVar8 + 1;
              lpString2 = lpString2 + 1;
            } while (bVar10);
            if (!bVar10) {
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            }
            if (iVar6 == 0) {
              _SfDeleteMetric_12(DAT_005ba29c,iVar3,3);
              goto LAB_0041d723;
            }
          }
          _SfSetMetricBinary_16(DAT_005ba29c,iVar3,lpString1,iVar5);
        }
      }
    }
LAB_0041d723:
    local_4 = local_4 + 0xc;
    if (&UNK_00588c43 < local_4) {
      return 1;
    }
  } while( true );
}


