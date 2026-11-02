/* Module: erv23260.dll
   Function: FUN_63825805
   Address: 63825805
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong FUN_63825805(void)

{
  undefined8 in_MM0;
  undefined8 in_MM1;
  ulonglong in_MM6;
  
  return (CONCAT17((char)((ulonglong)in_MM0 >> 0x38) + (char)((ulonglong)in_MM1 >> 0x38),
                   CONCAT16((char)((ulonglong)in_MM0 >> 0x30) + (char)((ulonglong)in_MM1 >> 0x30),
                            CONCAT15((char)((ulonglong)in_MM0 >> 0x28) +
                                     (char)((ulonglong)in_MM1 >> 0x28),
                                     CONCAT14((char)((ulonglong)in_MM0 >> 0x20) +
                                              (char)((ulonglong)in_MM1 >> 0x20),
                                              CONCAT13((char)((ulonglong)in_MM0 >> 0x18) +
                                                       (char)((ulonglong)in_MM1 >> 0x18),
                                                       CONCAT12((char)((ulonglong)in_MM0 >> 0x10) +
                                                                (char)((ulonglong)in_MM1 >> 0x10),
                                                                CONCAT11((char)((ulonglong)in_MM0 >>
                                                                               8) +
                                                                         (char)((ulonglong)in_MM1 >>
                                                                               8),(char)in_MM0 +
                                                                                  (char)in_MM1))))))
                  ) & in_MM6) >> 1;
}


