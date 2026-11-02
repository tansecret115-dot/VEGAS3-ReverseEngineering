/* Module: mp3plug.dll
   Function: FUN_5f7054a0
   Address: 5f7054a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f705663) */
/* WARNING: Removing unreachable block (ram,0x5f70566c) */
/* WARNING: Removing unreachable block (ram,0x5f705683) */
/* WARNING: Removing unreachable block (ram,0x5f70568a) */
/* WARNING: Removing unreachable block (ram,0x5f70569d) */
/* WARNING: Removing unreachable block (ram,0x5f705680) */
/* WARNING: Removing unreachable block (ram,0x5f7056a2) */

undefined ** __cdecl FUN_5f7054a0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  uint uVar6;
  uint uVar7;
  
  *param_1 = 0;
  if ((param_3 == 0) || (param_2 == 0)) {
    ppuVar1 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760460,(char *)0x2f,(undefined *)0x0
                           ,s_invalid_function_parameters_5f760350);
    return ppuVar1;
  }
  puVar2 = FUN_5f6d9720(0x10,1);
  if (puVar2 == (uint *)0x0) {
    ppuVar1 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760460,(char *)0x34,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar1;
  }
  *puVar2 = param_3;
  puVar2[1] = 0;
  puVar2[2] = param_2;
  puVar3 = FUN_5f6d9720(4,param_2);
  puVar2[3] = (uint)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar4 = FUN_5f6d9760(param_3 * 4);
        *(undefined4 *)(puVar2[3] + uVar6 * 4) = uVar4;
        uVar5 = puVar2[3];
        if (*(int *)(uVar5 + uVar6 * 4) == 0) {
          if (puVar2 != (uint *)0x0) {
            if (uVar5 != 0) {
              uVar6 = puVar2[2];
              uVar7 = 0;
              if (uVar6 != 0) {
                while( true ) {
                  if (*(int *)(uVar5 + uVar7 * 4) != 0) {
                    FUN_5f6d97a0(0x5f7055fa);
                    uVar6 = puVar2[2];
                  }
                  uVar7 = uVar7 + 1;
                  if (uVar6 <= uVar7) break;
                  uVar5 = puVar2[3];
                }
              }
              FUN_5f6d97a0(0x5f70561d);
            }
            FUN_5f6d97a0(0x5f705635);
          }
          ppuVar1 = FUN_5f6d94e0(0x5f705659,(char *)0x47,(undefined *)0x0,s_out_of_memory_5f75c330);
          return ppuVar1;
        }
        uVar6 = uVar6 + 1;
        param_1 = unaff_EBX;
      } while (uVar6 < param_3);
    }
    *param_1 = puVar2;
    return (undefined **)0x0;
  }
  FUN_5f6d97a0((int)puVar2);
  ppuVar1 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f760460,(char *)0x3e,(undefined *)0x0,
                         s_out_of_memory_5f75c330);
  return ppuVar1;
}


