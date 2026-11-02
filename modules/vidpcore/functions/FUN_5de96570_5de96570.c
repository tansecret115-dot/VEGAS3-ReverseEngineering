/* Module: vidpcore.dll
   Function: FUN_5de96570
   Address: 5de96570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5de9662d) */
/* WARNING: Removing unreachable block (ram,0x5de96676) */

uint FUN_5de96570(size_t param_1,uint param_2)

{
  ushort uVar1;
  size_t sVar2;
  void *_Memory;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_4;
  
  sVar2 = param_1;
  FUN_5de96300(param_1,0,0,&param_1);
  _Memory = malloc(param_1);
  iVar3 = FUN_5de96300(sVar2,_Memory,param_1,&param_1);
  uVar6 = param_2;
  if (iVar3 == 0) {
    free(_Memory);
    return 0;
  }
  iVar3 = FUN_5de96480(_Memory,param_2,&local_4);
  if (iVar3 != 0) {
    iVar3 = FUN_5de95fe0(_Memory);
    iVar4 = FUN_5de95fc0(_Memory);
    param_2 = iVar4;
    iVar5 = FUN_5de95fa0(_Memory);
    local_4 = local_4 & 0xffff;
    uVar1 = *(ushort *)(iVar3 + local_4 * 2);
    if (uVar1 == 0) {
      uVar6 = (uVar6 & 0xffff) + (uint)*(ushort *)(iVar4 + local_4 * 2) & 0x8000ffff;
    }
    else {
      uVar1 = *(ushort *)
               (iVar3 + ((uVar6 & 0xffff) +
                        local_4 + ((uint)(uVar1 >> 1) - (uint)*(ushort *)(iVar5 + local_4 * 2))) * 2
               );
      if (uVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)uVar1 + (uint)*(ushort *)(param_2 + local_4 * 2) & 0x8000ffff;
      }
    }
    free(_Memory);
    return uVar6;
  }
  free(_Memory);
  return 0;
}


