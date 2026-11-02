/* Module: encn3260.dll
   Function: FUN_66482c40
   Address: 66482c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482c40(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
    if (*(short *)(param_1 + 0x34) != 0) {
      do {
        (**(code **)(**(int **)(param_1 + 0x10) + 0xa0))
                  (*(int **)(param_1 + 0x10),uVar1,
                   *(undefined2 *)(*(int *)(param_1 + 0x30) + (uVar1 & 0xffff) * 4));
        uVar1 = uVar1 + 1;
      } while ((ushort)uVar1 < *(ushort *)(param_1 + 0x34));
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))(*(int **)(param_1 + 0x10));
    return 0;
  }
  FUN_66483190((void *)(param_1 + -0x14),param_2,s_Unable_to_setup_transport_664e21e0);
  return 0;
}


