/* Module: vegas30.exe
   Function: FUN_004f9180
   Address: 004f9180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f9180(int param_1)

{
  byte *lpString1;
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *lpString2;
  bool bVar8;
  bool bVar9;
  ushort *local_4;
  
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  uVar3 = FUN_0057c190(0,param_1 + 8,(param_1 - (param_1 + 8)) + 0x1134);
  *(undefined4 *)(param_1 + 0x1134) = uVar3;
  local_4 = &DAT_00614524;
  do {
    iVar2 = *(int *)(local_4 + 4);
    lpString1 = (byte *)(*(int *)(local_4 + -4) + param_1);
    lpString2 = (byte *)((int)&DAT_0063f2b0 + *(int *)(local_4 + -4));
    if (((9999 < iVar2) && (iVar2 < 0x2967)) && (uVar1 = *local_4, (uVar1 & 0x1000) == 0)) {
      if ((char)uVar1 == '\x01') {
        if (((uVar1 & 0x8000) == 0) &&
           (iVar4 = lstrcmpA((LPCSTR)lpString1,(LPCSTR)lpString2), iVar4 == 0)) {
          _SfDeleteMetric_12(DAT_00647200,iVar2,1);
        }
        else {
          _SfSetMetricString_12(DAT_00647200,iVar2,lpString1);
        }
      }
      else {
        iVar4 = *(int *)(local_4 + -2);
        if (iVar4 == 4) {
          if (((uVar1 & 0x8000) == 0) && (*(int *)lpString1 == *(int *)lpString2)) {
            _SfDeleteMetric_12(DAT_00647200,iVar2,4);
          }
          else {
            _SfSetMetric_12(DAT_00647200,iVar2,*(undefined4 *)lpString1);
          }
        }
        else {
          if ((uVar1 & 0x8000) == 0) {
            bVar8 = false;
            iVar5 = 0;
            bVar9 = true;
            iVar6 = iVar4;
            pbVar7 = lpString1;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar8 = *pbVar7 < *lpString2;
              bVar9 = *pbVar7 == *lpString2;
              pbVar7 = pbVar7 + 1;
              lpString2 = lpString2 + 1;
            } while (bVar9);
            if (!bVar9) {
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            }
            if (iVar5 == 0) {
              _SfDeleteMetric_12(DAT_00647200,iVar2,3);
              goto LAB_004f92aa;
            }
          }
          _SfSetMetricBinary_16(DAT_00647200,iVar2,lpString1,iVar4);
        }
      }
    }
LAB_004f92aa:
    local_4 = local_4 + 0xc;
    if ((ushort *)0x617c43 < local_4) {
      return 1;
    }
  } while( true );
}


