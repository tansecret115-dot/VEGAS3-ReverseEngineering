/* Module: vegas30.exe
   Function: FUN_00491480
   Address: 00491480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00491480(int param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  CHAR local_240 [260];
  undefined1 local_13c [316];
  
  if ((param_2 != (LPCSTR)0x0) && (iVar1 = lstrcmpA(param_2,""), iVar1 != 0)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xa0 + param_3 * 8) != 0) {
      iVar1 = 0;
      do {
        iVar2 = lstrcmpiA(param_2,*(LPCSTR *)(*(int *)(param_1 + 0x9c + param_3 * 8) + iVar1));
        if (iVar2 == 0) {
          uVar3 = _SfGetString_8(DAT_00647204,0x6d75);
          SfMsgBox(DAT_00647624,0x30,uVar3,param_2);
          return;
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + 0x14;
      } while (uVar4 < *(uint *)(param_1 + 0xa0 + param_3 * 8));
    }
    if (param_3 != 0) {
      uVar5 = param_3 * 0xe - 0xe;
      uVar4 = param_3 * 0xe - 1;
      if (uVar5 <= uVar4) {
        while (iVar1 = _SfGetMetricStringEx_24(DAT_00647200,uVar5,local_240,0x104,0,1), iVar1 != 0)
        {
          iVar1 = lstrcmpA(local_240,param_2);
          uVar6 = uVar5;
          if (iVar1 == 0) {
            do {
              if (uVar4 < uVar5) {
                return;
              }
              uVar6 = uVar6 + 1;
              _SfDeleteMetric_12(DAT_00647200,uVar5,3);
              _SfDeleteMetric_12(DAT_00647200,uVar5,1);
              if (uVar5 < uVar4) {
                iVar1 = _SfGetMetricStringEx_24(DAT_00647200,uVar6,local_240,0x104,0,1);
                if (iVar1 == 0) {
                  return;
                }
                _SfSetMetricString_12(DAT_00647200,uVar5,local_240);
                uVar3 = _SfGetMetricBinary_16(DAT_00647200,uVar6,local_13c,0x13c);
                _SfSetMetricBinary_16(DAT_00647200,uVar5,local_13c,uVar3);
              }
              uVar5 = uVar5 + 1;
            } while( true );
          }
          uVar5 = uVar5 + 1;
          if (uVar4 < uVar5) {
            return;
          }
        }
      }
    }
  }
  return;
}


