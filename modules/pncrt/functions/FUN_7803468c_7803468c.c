/* Module: pncrt.dll
   Function: FUN_7803468c
   Address: 7803468c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_7803468c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}


