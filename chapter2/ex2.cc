/* Considering a mortgage payment calculation. For the rate, one might choose unsigned double
 * (as it remains positive and, can't be stored in an integer and has negligable cost of
 * calculation compared to the less precise float type). 
 *
 * For the principal a signed double would make sense as the value is once more non-integral
 * and in this case could potentially be negative (assuming overpayment is possible).
 *
 * The payment could be the same type as the rate. */
