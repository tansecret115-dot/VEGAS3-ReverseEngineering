/* Module: rv303260.dll
   Function: FUN_672112e0
   Address: 672112e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_672112e0(undefined8 *param_1,int param_2,int param_3,ulonglong *param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar4;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  
  if ((param_2 == param_5 >> 1) && (param_3 == param_6)) {
    iVar2 = param_3 * param_2 >> 3;
    do {
      uVar1 = *param_4;
      uVar4 = uVar1 & 0xff00ff00ff00ff;
      uVar3 = (ushort)((short)uVar4 + ((ushort)uVar1 >> 8)) >> 1;
      uVar5 = (ushort)((short)(uVar4 >> 0x10) + ((ushort)(uVar1 >> 0x10) >> 8)) >> 1;
      uVar6 = (ushort)((short)(uVar4 >> 0x20) + ((ushort)(uVar1 >> 0x20) >> 8)) >> 1;
      uVar7 = (ushort)((short)(uVar4 >> 0x30) + (ushort)(uVar1 >> 0x38)) >> 1;
      uVar1 = param_4[1];
      uVar4 = uVar1 & 0xff00ff00ff00ff;
      uVar8 = (ushort)((short)uVar4 + ((ushort)uVar1 >> 8)) >> 1;
      uVar9 = (ushort)((short)(uVar4 >> 0x10) + ((ushort)(uVar1 >> 0x10) >> 8)) >> 1;
      uVar10 = (ushort)((short)(uVar4 >> 0x20) + ((ushort)(uVar1 >> 0x20) >> 8)) >> 1;
      uVar11 = (ushort)((short)(uVar4 >> 0x30) + (ushort)(uVar1 >> 0x38)) >> 1;
      param_4 = param_4 + 2;
      *param_1 = CONCAT17((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                          CONCAT16((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10)
                                   ,CONCAT15((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                             (0xff < uVar9),
                                             CONCAT14((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 -
                                                      (0xff < uVar8),
                                                      CONCAT13((uVar7 != 0) * (uVar7 < 0x100) *
                                                               (char)uVar7 - (0xff < uVar7),
                                                               CONCAT12((uVar6 != 0) *
                                                                        (uVar6 < 0x100) *
                                                                        (char)uVar6 - (0xff < uVar6)
                                                                        ,CONCAT11((uVar5 != 0) *
                                                                                  (uVar5 < 0x100) *
                                                                                  (char)uVar5 -
                                                                                  (0xff < uVar5),
                                                                                  (uVar3 != 0) *
                                                                                  (uVar3 < 0x100) *
                                                                                  (char)uVar3 -
                                                                                  (0xff < uVar3)))))
                                            )));
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


